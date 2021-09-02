clc
clear
P=1;
B=input('Base: ');
E=input('Expoente: ');
for i=1:E
P=P*B;
end
disp('Potenciação= ' + string(P));