require 'mkmf'

def gnuplot(commands)
  IO.popen(find_executable('gnuplot'), "w") { |io| io.puts commands }
end

commands = %Q(
  set terminal svg
  set output "curves.svg"
  set datafile separator ","
  set autoscale
  set xlabel "n"
  set ylabel "T(n)"
  plot 'select.csv' u 1:2 w l title 'select','insert.csv' u 1:2 w l title 'insert','bubble.csv' u 1:2 w l title 'bubble','merge.csv' u 1:2 w l title 'merge', 'heap'
)
gnuplot(commands)