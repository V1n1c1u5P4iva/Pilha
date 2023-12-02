# Pilha de Livros em C

Este programa em C implementa uma pilha de livros. Aqui está um resumo do que o código faz:

1. Cria uma pilha vazia de livros.
2. Exibe um menu para o usuário com as seguintes opções:
   - **Opção 1**: Permite ao usuário inserir um livro na pilha. O usuário digita o título do livro e este é adicionado à pilha.
   - **Opção 2**: Remove o livro do topo da pilha e exibe o título do livro removido.
   - **Opção 3**: Imprime o livros no topo pilha.
   - **Opção 4**: Encerra o programa.
3. Após a escolha do usuário, a ação correspondente é executada.
4. Este processo continua até que o usuário escolha a opção 4 para encerrar o programa.
5. Finalmente, o programa libera a memória alocada para a pilha antes de terminar.

Por favor, note que este código depende de várias funções (como `pilha_cria`, `pilha_push`, `pilha_pop`, `pilha_imprime`, `pilha_libera` e `menu`) que estão presumivelmente definidas no arquivo de cabeçalho "livro_pilha.h" ou em outro lugar no seu projeto. Estas funções são usadas para manipular a pilha de livros.
