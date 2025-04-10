# Fractol

Este projeto tem como objetivo renderizar fractais interativos utilizando a biblioteca gráfica MiniLibX. O programa é capaz de exibir os conjuntos de Mandelbrot e Julia com visualizações dinâmicas e efeitos visuais personalizáveis.

---

## Estrutura de Arquivos

### `fractol.h`
Contém:
- Inclusões de bibliotecas necessárias.
- Definições de macros e estruturas principais:
  - `t_complex`: representa um número complexo.
  - `t_img`: estrutura que armazena informações da imagem.
  - `t_fractol`: estrutura principal do programa, contendo todos os dados para renderização e controle do fractal.
- Declarações de funções utilizadas nos arquivos do projeto.

---

### `main.c`
Fluxo do programa:
- Declaração da estrutura `fractal`.
- Validação dos inputs da linha de comando.
- Atribuição de valores iniciais à estrutura.
- Chamada da função `fractal_init`.
- Renderização da imagem e entrada no loop principal.
- Caso os inputs sejam inválidos, o programa exibe uma mensagem de erro e termina.

---

### `init.c`
Contém:
- Tratamento de erro para falha de alocação de memória.
- A função principal `fractal_init`:
  - Inicializa conexões com o sistema gráfico.
  - Cria a janela de exibição.
  - Aloca memória para a imagem.
  - Armazena informações sobre a imagem.
  - Define os hooks para interações com o teclado.
  - Atribui os valores iniciais necessários para renderização.

---

### `render.c`
Responsável por:
- Função para pintar um único pixel na imagem, com base em coordenadas e cor.
- Função que atribui o valor inicial da variável `c`, usada para cálculo dos fractais.
- Função principal de cálculo (`handle_pixel`):
  - Converte coordenadas da janela para o plano complexo.
  - Aplica o algoritmo do fractal (Mandelbrot ou Julia).
  - Verifica se o ponto escapa para o infinito com base no módulo de `z`.
  - Define a cor do pixel com base no número de iterações.
- Função que percorre todos os pixels da imagem e renderiza usando `handle_pixel`, desenhando a imagem resultante na janela.

---

## Requisitos do Projeto

- O programa deve oferecer os conjuntos de Julia e Mandelbrot.
- É possível gerar diferentes conjuntos de Julia passando parâmetros diferentes pela linha de comando.
- Um parâmetro define qual fractal será exibido:
  - `./fractol mandelbrot`
  - `./fractol julia <value_1> <value_2>`
- Parâmetros adicionais podem ser tratados como opções de renderização.
- Se nenhum parâmetro ou um parâmetro inválido for fornecido, o programa exibe uma lista de opções disponíveis e encerra corretamente.
- É obrigatório o uso de pelo menos algumas cores para revelar a profundidade dos fractais.
- É incentivado experimentar com efeitos psicodélicos.
- A funcionalidade de zoom via roda do mouse foi removida conforme decisão de projeto.

---

## Observações
Este projeto é desenvolvido como parte do currículo da 42 e tem como foco o uso de matemática, lógica de programação e manipulação de gráficos em tempo real.
