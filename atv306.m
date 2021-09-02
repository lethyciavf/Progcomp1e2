clc
clear
SOMA=0;
for   NUM_ALUNO=1 : 3;
      disp('Notas do aluno ' + NUM_ALUNO);
for NUM_PROVA=1 : 2;
     NOTA_PROVA=input('Nota da PROVA: ');
     SOMA= NOTA_PROVA;
end
end
    NOTA_FINAL=SOMA/3;
      disp('\nNota final= ' + string(NOTA_FINAL) );
if (NOTA_FINAL > 60)
      disp('Auno aprovado');
else
     disp('Auno reprovado');
end