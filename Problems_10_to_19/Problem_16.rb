ans = 2 ** 1000
sum = 0
while ans > 0
  sum = sum + ans%10
  ans = ans / 10
  puts sum
end