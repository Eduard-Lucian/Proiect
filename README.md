# Proiect-Pa

Proiectul „Biblioteca Digitală – Gestionarea Împrumuturilor pentru Cărțile Digitale și Fizice” se bazează pe un sistem care permite gestionarea împrumuturilor de cărți fizice și digitale. 
Administratorii pot adăuga, șterge și vizualiza cărțile, iar utilizatorii pot împrumuta și returna cărți, având acces și la informații despre stocul disponibil.

**Implementarea algoritmului**

Implementarea algoritmului pentru proiectul „Biblioteca Digitală – Gestionarea Împrumuturilor pentru Cărțile Digitale și Fizice” se bazează pe organizarea și manipularea datelor referitoare la cărțile din bibliotecă. 

Algoritmul include funcționalități pentru gestionarea împrumuturilor de cărți, atât fizice, cât și digitale, precum și pentru actualizarea stocurilor și monitorizarea statutului împrumuturilor. 

Structura principală a algoritmului permite administrarea eficientă a cărților, oferind opțiuni de vizualizare a cărților disponibile, adăugare și ștergere de cărți, gestionarea utilizatorilor și a împrumuturilor, respectând regulile specifice fiecărui tip de carte. 

Algoritmul se asigură că datele sunt actualizate corect și că interacțiunile utilizatorilor cu sistemul sunt fluide și intuitive.

**Structura**

1. Funcția read_rules(char *str2):
   - Această funcție citeste regulile din fișierul data.in.
   - Deschide fișierul data.in pentru citire.
   - Citeste prima linie din fișier și stochează regulile în șirul str2.
   - După citire, închide fișierul.

2. Funcția read_frag(char *str1):
   - Această funcție citeste fragmentul de cod din fișierul data.in.
   - Deschide fișierul data.in pentru citire.
   - Sare peste prima linie (regulile) și apoi citeste a doua linie din fișier și o stochează în șirul str1.
   - După citire, închide fișierul.

3. Funcția MinOfTwo(int a, int b):
   - Această funcție primește două numere întregi și returnează minimul dintre ele.
   - Nu deschide niciun fișier.

4. Funcția levenshtein_distance(const char *s1, const char *s2):
   - Această funcție calculează distanța Levenshtein între două șiruri de caractere.
   - Nu deschide niciun fișier.

5. Funcția write_output(const char *str1, const char *str2, int distance):
   - Această funcție scrie rezultatul în fișierul data.out.
   - Deschide fișierul data.out pentru scriere.
   - Scrie rezultatul în fișier și apoi închide fișierul.

## Fișiere

- `main.c`: Fișierul principal al programului care conține funcția `main`.
- `levenshtein.c`: Fișierul de implementare care conține funcția de calcul a distanței Levenshtein.
- `levenshtein.h`: Fișierul header care declară funcția de calcul a distanței Levenshtein.

  ## Instrucțiuni de Compilare și Rulare

1. *Clonați sau descarcati repository-ul:*
   
```sh
 git clone https://github.com/Eduard-Lucian/Proiect-Pa
```

2. *Deschideți Terminalul sau Linia de Comandă:*
   - Utilizatorul va deschide terminalul sau linia de comandă a sistemului de operare.
     **Pe Windows**: Poți deschide Command Prompt tastând `cmd` în bara de căutare și apăsând Enter.
     **Pe Linux sau macOS**: Deschide aplicația terminal.
     
3. *Navighează în Directorul cu Fișierele Sursă:*
   - Utilizatorul va naviga în directorul care conține fișierele sursă ale aplicației folosind comanda cd (change directory).
De exemplu:
   ```sh
   cd cale\către\proiect
	```

4. *Compilează Codul Sursă:*
   - Utilizatorul va folosi un compilator C, cum ar fi gcc sau clang, pentru a compila fișierele sursă.
   - Comanda de compilare va fi similară cu:
     
```sh
gcc main.c levenshtein.c -o main
```

   - Aceasta va genera un fișier executabil numit corector.

4. *Rulează Aplicația:*
   - După compilare, utilizatorul va rula aplicația introducând comanda:
     
```sh
main.exe
```
     
   - Acest lucru va executa fișierul executabil și va porni aplicația.

5. *Introducerea Input-ului:*
   - Aplicația va afișa un prompt solicitând utilizatorului să introducă un număr între 0 și 9 pentru a specifica lungimea cuvântului pentru regula de sintaxă. Daca acesta doreste sa utilizeze o functie propie va tasta 10.

6. *Introducerea Fragmentului de Cod:*
   - Utilizatorul va introduce un fragment de cod sau va selecta un cuvânt predefinit în funcție de lungimea specificată.

7. *Afișarea Rezultatului:*
   - Aplicația va calcula distanța Levenshtein între fragmentul de cod și regula de sintaxă specificată și va afișa rezultatul într-un fișier de ieșire, cum ar fi data.out.

8. *Gestionarea Erorilor:*
   - În cazul apariției erorilor în timpul compilării sau executării, utilizatorul va primi mesaje de eroare în terminal care îi vor indica ce trebuie să corecteze.

