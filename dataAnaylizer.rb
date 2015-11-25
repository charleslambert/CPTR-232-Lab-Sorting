#!/usr/bin/env ruby
require 'csv'

random = Random.new
hash = {:insert => [], 
		:select => [], 
		:bubble => [], 
		:merge 	=> [],
		:heap => []}
system("make all")
xarray = []

for i in (100..10000).step(100)
	xarray.push(i)
end


for i in (100..10000).step(100) 
#generate random data to be sorted
#creates files to hold data
	f = File.new("num#{i}","w")
	for j in 0...i
		f.print "#{random.rand(100)},"
	end
	f.close
end

for i in (100..10000).step(100)
	10.times do
		system("./sort insert num#{i}")
		system("./sort select num#{i}")
		system("./sort bubble num#{i}")
		system("./sort merge num#{i}")
		system("./sort heap num#{i}")
	end

	hash.keys.each {|key| 
		array = []
		sum = 0

		f = File.open("#{key.to_s}clock.txt","r")

		f.each_line {|x| x.chomp.split(",").map { |y|
			array.push(y.to_f)}}
		f.close
		
		array.each {|x| sum += x}

		hash[key].push(sum/array.length)

		File.delete("#{key.to_s}clock.txt")
	}

end

hash.keys.each { |key|
	CSV.open("#{key.to_s}.csv","w"){ |csv|
		for i in 0...xarray.length
			csv << [xarray[i], hash[key][i]]
		end
		}
	}

for i in (100..10000).step(100)
#clean up all files
	File.delete("num#{i}")
end
system("make clean")