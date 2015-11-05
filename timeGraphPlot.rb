#!/usr/bin/env ruby

random = Random.new

for i in (0..10000).step(100) 
	f = File.new("num#{i}","w")
	for j in 0...i
		f.print "#{random.rand(100)},"
	end
	f.close
end

for i in (0..10000).step(100)
	10.times do
		system("make all")
		system("./sort insert num#{i}")
		system("./sort select num#{i}")
		system("./sort bubble num#{i}")
		system("./sort merge num#{i}")
	end
end


for i in (0..10000).step(100)
	File.delete("num#{i}")
end

