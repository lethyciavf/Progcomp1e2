clc
clear

far=[32:3.596:93.2];

cel=((5/9)*far-32);

p=(5.5289*(10^-8)*(cel.^3))-(8.5016*(10^-6)*(cel.^2))+(6.5622*(10^-5)*(cel)+0.99987);

disp(p)
plot(p,cel);
title('Grafico p x tc');
xlabel('P (densidade da agua)');
ylabel('Temperatura em Celsius');