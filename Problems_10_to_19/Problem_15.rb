grid = 20
array = Array.new(grid+1) {|x| 1}
20.times do
  pos = 1
  while (pos <=  grid)
    array[pos] = array[pos] + array[pos-1]
    pos += 1
  end
end

puts array.last