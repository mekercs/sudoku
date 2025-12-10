# sudoku 🧩

## Rövid leírás  
Ez a projekt egy **véletlenszerű Sudoku tábla generátor**, amit én készítettem C++-ban.  
A program létrehoz egy teljes 9×9-es Sudoku táblát úgy, hogy minden 3×3-as blokkban a számok **1–9 egyszer fordulnak elő**, majd szépen kiírja a táblát a konzolra.

## ⚙️ Mit tud a program?
- Automatikusan kitölti a 0-ként jelölt cellákat a táblában.  
- Minden 3×3-as blokkban biztosítja, hogy a számok **ne ismétlődjenek**.  
- Szép, jól áttekinthető konzolos formátumban írja ki a táblát.  
- Egyszerű, tiszta C++ kód — könnyen érthető és továbbfejleszthető.

## 🛠️ Hogyan működik?
1. A tábla kezdetben tartalmaz néhány számot és 0-kat az üres celláknál.  
2. A program végigmegy minden cellán.  
3. Ha a cella üres (0), akkor generál egy véletlenszerű számot 1–9 között.  
4. Ellenőrzi, hogy a szám **már nem szerepel-e ugyanabban a 3×3-as blokkban**.  
5. Ha a szám megfelel, beírja a cellába; ha nem, próbál másik véletlenszámot.  
6. A folyamat végére minden cella ki van töltve, és a teljes tábla megfelel a 3×3-as blokk szabályainak.  
7. Kiírja a kész táblát a konzolra, vizuálisan elkülönítve a blokkokat.

## 🚀 Fordítás és futtatás

### Linux / Mac / Windows (g++)
```bash
g++ -o sudoku main.cpp
./sudoku
Alternatív (ha több fájl lenne)
bash
Kód másolása
g++ -o sudoku *.cpp
./sudoku
📦 Projekt felépítése
main.cpp – a teljes program, a Sudoku tábla generálásáért és kiíratásáért felel.

A tábla mérete fix (9×9), de könnyen módosítható a MERET változóval.

A generált tábla mindig véletlenszerű, de a 3×3-as blokk szabályait betartja.

👤 Készítette
mekercs
