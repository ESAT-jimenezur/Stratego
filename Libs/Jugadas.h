/**

Tipos de fichas

    1- Espia
    2- Explorador
    3- Minero
    4.- Sargento
    5.- Teniente
    6.- Capitan
    7.- Comandante
    8.- Coronel
    9.- General
    10.- Mariscal

    11- Bomba
    12- Bandera

**/

int j_Defensiva[4][10] = {
    2,6,5,9,2,6,2,10,6,2,
    7,2,11,1,8,4,2,7,8,4,
    5,4,11,2,7,3,5,6,5,11,
    3,11,4,2,3,11,3,3,11,12
};

int j_Agresiva[4][10] = {
    6,2,4,9,6,2,2,10,2,6,
    5,2,7,5,11,2,7,7,8,3,
    4,8,1,3,11,2,6,5,5,11,
    3,11,4,11,4,2,3,3,11,12
};

int j_Defensa_Ciclon[4][10] = {
    2,7,3,2,6,5,7,2,8,11,
    10,6,11,3,8,6,3,3,11,4,
    1,11,12,11,3,9,5,2,4,6,
    7,4,11,4,2,2,5,2,5,2
};

int j_Barricadas[4][10] = {
    7,5,6,9,2,2,8,5,2,6,
    11,11,5,7,11,11,7,1,11,11,
    4,4,6,3,5,4,3,6,2,3,
    12,10,2,4,2,3,2,8,3,2
};

int j_Blitzkrieg[4][10] = {
    2,8,6,4,10,9,6,5,8,3,
    5,3,3,2,11,2,6,2,7,11,
    7,1,11,2,7,3,4,11,1,5,
    2,11,12,11,6,3,2,5,4,4
};
