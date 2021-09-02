clear
clc
disp('Programa para calcular o peso ideal');
%declaracao de variaveis
peso=0;
h=0;
%entrada de valores
h = input('Digite a sua altura (m.cm): ');
disp('Se voce deseja calcular o peso ideal para alguem do sexo masculino, digite 1, para o sexo feminino, digite 2');
resp = input('1 ou 2? ');
if resp == 1;
    peso = (72.7*h) - 58.0;
else
    peso = (62.1*h) - 44.7;
end;
fprintf ('O peso ideal eh: %0.1f\n ', peso);