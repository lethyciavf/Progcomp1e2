clc          
clear
%Programa para controle do caixa volume
%Entrada:leitura do codigo do produto
%saída:codigo do produto;preço;quantidade;total;troco;quantidade a ser paga pelo do cliente
%Inicialização de variaveis
x=0;
codigo=0;
preco=1;
quantidade=0;
total=0;
pagamento=0;
troco=0;
%Objetivo:
%Vendas de mercadorias
%para encerrar,digite (0)no preço
%Laço para começar as compras das mercadorias

  while preco>0;
      %Lê o primeiro produto
     codigo=input('Codigo do produto=');
     %Lê o preço do produto
     preco=input('Preço unitario do produto=');
     %Lê a quantidade(s)de produto
     quantidade=input('Quantidade(s)do pruduto');
     %Lê o tatal da compra
     x=preco*quantidade;
     % Encerrar o laço para compras das mercadorias
     total=total+x;
  end
  % Encerrar o laço para compras das mercadorias
  %Mostrar na tela o total das vendas
     fprintf('Total da venda%i\n',total)
     %Mostrar na tela o pagamento do cliente
     pagamento=input('Recebeu=',pagamento);
     %calculo do troco do cliente
     troco=total-pagamento;
     %Mostrar na tela o retorno do pagamento ao cliente
     fprintf('Total de troco=%i\n',troco)
     %proxima venda
     

    %Final do laço do programa