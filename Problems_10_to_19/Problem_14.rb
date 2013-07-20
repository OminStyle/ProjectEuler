n = 1000000
top_n = 1000000
top_count = 1
while (n > 1)
  x = n
  #print x  #for printing terms
  count = 1
  while (x > 1) do
    if x.even?
      x = x / 2
    else
      x = 3 * x + 1
    end
    count += 1
  #print (" -> " + x.to_s) #for printing terms
  end
  #print "\n" #for printing terms
  if (count > top_count)
    top_count = count
    top_n = n
  end
  #puts n.to_s + "\t\t"  + count.to_s
  n -= 1
end
puts top_n.to_s + "\t" + top_count.to_s

# IDEA: dont need to check n%4 == 0 ???