gets.chomp.to_i.times do
  a, b = gets.chomp.split.map(&:to_i)    
  puts "#{a.gcd(b)} #{a.lcm(b)}"
end
