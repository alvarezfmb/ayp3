enAuto(auckland,hamilton).
enAuto(hamilton,raglan).
enAuto(valmont,saarbruecken).
enAuto(valmont,metz).

enTren(metz,frankfurt).
enTren(saarbruecken,frankfurt).
enTren(metz,paris).
enTren(saarbruecken,paris).

enAvion(frankfurt,bangkok).
enAvion(frankfurt,singapore).
enAvion(paris,losAngeles).
enAvion(bangkok,auckland).
enAvion(singapore,auckland).
enAvion(losAngeles,auckland).

%% Base cases
viajar(X,Y) :- enAuto(X,Y).
viajar(X,Y) :- enAvion(X,Y).
viajar(X,Y) :- enTren(X,Y).

%% Inductive cases
viajar(X,Y) :-
  enAuto(X,Z),
  viajar(Z,Y).
viajar(X,Y) :-
  enAvion(X,Z),
  viajar(Z,Y).
viajar(X,Y) :-
  enTren(X,Z),
  viajar(Z,Y).