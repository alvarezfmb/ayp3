padre(guillermo,rossi,walter).
padre(guillermo,rossi,lucia).
padre(guillermo,rossi,camila).

madre(carlos,gardel,hector).

madre(beatriz,capusotto,lucia).
madre(beatriz,capusotto,walter).
madre(beatriz,capusotto,rodolfo).

madre(jimena,kaplan,camila).
madre(jimena,kaplan,hector).

mismo_padre(A,B):-
  padre(X,Y,A), padre(X,Y,B).

misma_madre(A,B):-
  madre(X,Y,A), madre(X,Y,B).

medio_hermano(A,B) :-
  mismo_padre(A,B),
  not(misma_madre(A,B)).

medio_hermano(A,B) :-
  misma_madre(A,B),
  not(mismo_padre(A,B)).



