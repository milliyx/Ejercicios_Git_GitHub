puts "**** B i e n v e n i d e **** \n "
puts "Ingresa el primer número:"
num1 = gets.chomp.to_f

puts "Ingresa el segundo número:"
num2 = gets.chomp.to_f

puts "\n¿Qué operación deseas realizar?\na) +\nb) -\nc) *\nd) /"
op = gets.chomp

case op
when "+", "a"
    sum = num1 + num2
    puts "\nEl resultado es: #{sum}"
when "-", "b"
    puts "¿Qué deseas realizar?"
    puts "a) #{num1} - #{num2}"
    puts "b) #{num2} - #{num1}"
    op2 = gets.chomp
    if op2 == "a"
        res = num1 - num2
    else op2 == "b"
        res = num2 - num1
    end
    puts "\nEl resultado es: #{res}"
when "*", "c"
    mult = num1 * num2
    puts "\nEl resultado es: #{mult}"
when "/", "d"
    puts "¿Qué deseas realizar?"
    puts "a) #{num1} / #{num2}"
    puts "b) #{num2} / #{num1}"
    op3 = gets.chomp
    if op3 == "a"
        div = num1 / num2
    else op3 == "b"
        div = num2 / num1
    end
    puts "\nEl resultado es: #{div}"

else
    puts "Operación inválida"
    exit
end

