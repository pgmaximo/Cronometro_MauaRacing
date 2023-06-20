# Nome do Projeto #
CRONOMETRO_MAUARACING

# Descrição #
O CRONOMETRO_MAUARACING é um projeto desenvolvido pela equipe de DevOps e elétrica do time da FSAE, Maua Racing. Ele consiste em dois arquivos, cada um com uma aplicação específica, com o objetivo de fornecer um sistema de cronometragem para diferentes ocasiões.

# cronometro.ivo # 
O arquivo "cronometro.ivo" é voltado para uma aplicação de cronometragem em pistas de corrida. A ideia principal é ter dois pares de cones, cada um ligado a uma barreira de infravermelho, posicionados no início e no final do trajeto. Esses cones são conectados por um cabo ao ESP32, que atua como o dispositivo central do sistema. Quando um veículo cruza as barreiras de infravermelho, o cronômetro é ativado e o tempo decorrido entre os cones é medido e exibido.

# cronometro_skidpad.ino #
Já o arquivo "cronometro_skidpad.ino" destina-se à cronometragem de voltas em um circuito conhecido como skidpad. Nessa aplicação, é utilizado apenas um par de cones com barreiras de infravermelho posicionados no meio do trajeto. Assim que um veículo passa pela barreira inicial, o cronômetro é iniciado, e quando o mesmo veículo passa pela barreira final, o tempo da volta é registrado e exibido.

# Funcionalidades #
Cronometragem precisa e confiável para pistas de corrida.
Opção para cronometrar voltas em circuito skidpad.
Uso de barreiras de infravermelho para detectar veículos e medir o tempo decorrido.
Conexão com o ESP32 para processamento e exibição dos resultados.
# Como utilizar #
Clone este repositório para o seu ambiente de desenvolvimento local.
Faça o upload do arquivo correspondente à aplicação desejada (cronometro.ivo ou cronometro_skidpad.ino) para o seu dispositivo ESP32.
Conecte os pares de cones às respectivas barreiras de infravermelho e, em seguida, conecte-os ao ESP32 conforme indicado no esquema de conexões fornecido.
Alimente o ESP32 com energia adequada.
Inicie o programa no ESP32 pressionando o botão de inicialização ou através de um comando específico, dependendo da implementação do código.
O cronômetro estará pronto para cronometrar as passagens dos veículos pelos cones e exibir os resultados.
# Contribuição #
Contribuições são bem-vindas! Se você deseja melhorar este projeto, siga as etapas abaixo:

Faça um fork deste repositório.
Crie um branch com a sua nova funcionalidade ou correção de bug: git checkout -b minha-nova-funcionalidade.
Faça as alterações desejadas e adicione os devidos commits: git commit -m 'Adicionando nova funcionalidade'.
Envie suas alterações para o
