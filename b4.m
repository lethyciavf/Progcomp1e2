clear
clc
s=0;
i=0;
n=input('Entre com n (somatoria): ');
for contador=[1:n]
    i=i+1;
    s=s+((2+i)/(3-(i^3)));
end
disp('somatorio: ');
disp(s)