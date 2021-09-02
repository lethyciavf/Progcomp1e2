clear
clc
s=0;
i=0;
for contador=[1:40]
    i=i+1;
    s=s+((2+i)^2);
end
disp('somatorio: ');
disp(s)