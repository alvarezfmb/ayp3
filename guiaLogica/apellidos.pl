padre(guillermo, rossi, walter).
padre(guillermo, rossi, lucia).
madre(beatriz, capusotto, walter).
madre(beatriz, capusotto, lucia).

apellido(Nombre, Apellido) :- padre(Nombre,Apellido,_).
apellido(Nombre,Apellido) :- madre(Nombre,Apellido,_).
apellido(Nombre,Apellido) :- padre(_,Apellido,Nombre).