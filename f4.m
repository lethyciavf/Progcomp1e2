clear
clc
s=1;
i=0;
n=input('Entre com n (somatoria): ');
for contador=[1:n]
    i=i+1;
    s=s*(((1-(2*(i^2)))^3)/(sqrt(i^3)));
end
disp('somatorio: ');
disp(s)