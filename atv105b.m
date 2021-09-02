clc
clear
x=4;
y=2;
while x < 10
    x = (x + y);
    y = (y + 2);
    fprintf('Valor de x =%i\t', x)
    fprintf('Valor de y =%i\n', y)
end