# cook your code here
a = gets.chomp.to_i 
for i in 0...a
 b = gets.chomp.split(" ")
 c = b[0].to_i - b[1].to_i
 if c<=0 
   puts 0 
 else
   puts c
 end
end 
