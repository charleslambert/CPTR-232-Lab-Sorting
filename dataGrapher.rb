require 'mkmf'

def gnuplot(commands)
  IO.popen(find_executable("gnuplot.exe"), "w") { |io| io.puts commands }
end

commands = %Q(
  set terminal wxt
  set output
  set datafile separator ","
  set autoscale
  set xlabel "n"
  set ylabel "T(n)"
  plot 'select.csv' u 1:2 w l title 'select','insert.csv' u 1:2 w l title 'insert','bubble.csv' u 1:2 w l title 'bubble','merge.csv' u 1:2 w l title 'merge', 'heap.csv' u 1:2 w l title 'heap'
)
gnuplot(commands)