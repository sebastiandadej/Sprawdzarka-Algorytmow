generator_scisle_tajne.exe
FOR /L %%C IN (0,1,49999) DO scisle_tajne2 < we%%C.txt > wyx%%C.txt
FOR /L %%C IN (0,1,49999) DO scisle_tajne < we%%C.txt > wy%%C.txt
porownywaczka.exe

Rem tam gdzie jest 49999 nalezy wpisac ilosc porcji danych jakik bedziesz generowac,
Rem to jest ta sama liczba ktora podasz na poczatku w programie generator_scisle_tajne.exe