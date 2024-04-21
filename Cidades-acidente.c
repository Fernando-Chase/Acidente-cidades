int main()


{



   int entradas = 1;


   int cod_cidade, num_veiculos, num_acidentes;


   char continuar;

   int cod_menor_cidade = 0;


   int cod_maior_cidade = 0;


   int cod_maior_acidente = 0;


   int cod_menor_acidente = 0;


   int soma_de_veiculos = 0;


   int soma_menor_2000 = 0;


   int num_cidades = 0;


   int num_cidades_menor_2000 = 0;


   int maior_idice = 0;


   int menor_idice = 0;


   int menor_idice_cidade = 0;


   int maior_idice_cidade = 0;


   float media_veiculos = 0;


   float media_menor_2000 = 0;



   

   do


   {


       printf(" 1- Insira o Código da Cidade: ");


       scanf("%d", &cod_cidade);



       printf(" 2- Insira o Número de Veículos: ");


       scanf("%d", &num_veiculos);



       printf(" 3- Insira o Número de Acidentes: ");


       scanf("%d", &num_acidentes);



      
       soma_de_veiculos += num_veiculos;


       num_cidades += 1;



       if (num_acidentes < menor_idice_cidade || menor_idice_cidade == 0)

           {


               cod_menor_cidade = cod_cidade;


               menor_idice_cidade = num_acidentes;


           }



       if (num_acidentes > maior_idice_cidade || maior_idice_cidade == 0)


           {


               cod_maior_cidade = cod_cidade;


               maior_idice_cidade = num_acidentes;



           }




       if (num_veiculos < 2000)


           {


               soma_menor_2000 += num_acidentes;


               num_cidades_menor_2000 += 1;


           }


       if (num_acidentes < menor_idice || menor_idice == 0)


           {


               cod_menor_acidente = cod_cidade;


               menor_idice = num_acidentes;



           }


       if (num_acidentes > maior_idice || maior_idice == 0)


           {


               cod_maior_acidente = cod_cidade;


               maior_idice = num_acidentes;


           }
       printf("\n** Digite 's' para Continuar ou 'n' para Sair: ");


       scanf("%s", &continuar);



       

entradas = entradas + 1;



   } while (continuar == 's');



   

  
   printf("     RESULTADO para %d Cidades\n", entradas - 1);





   

   media_veiculos = (soma_de_veiculos/num_cidades);


   media_menor_2000 = (media_menor_2000/num_cidades_menor_2000);

 


  

   printf(" - Menor Índice de acidentes: %d\n", menor_idice);


   printf(" - Cidade com Menor Índice de acidentes: %d\n", cod_menor_cidade);


   printf(" - Maior Índice de acidentes: %d\n", maior_idice);


   printf(" - Cidade com Maior Índice de acidentes: %d\n", cod_maior_cidade);


   printf(" - Média de Veiculos de Todas as Cidades: %.1f\n", media_veiculos);


   printf(" - Média de Acidentes de Cidades com Menos de 2000 veículos de passeio: %.1f\n\n", media_menor_2000);



   

   return 0;



}