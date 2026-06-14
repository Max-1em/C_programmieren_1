# 04 Funktionen

## Ziel
Schreibe ein kleines Programm mit eigenen Funktionen.

## Anforderungen
- Schreibe eine Funktion `add`, die zwei Zahlen addiert.
- Schreibe eine Funktion `maximum`, die die größere von zwei Zahlen zurückgibt.
- Rufe beide Funktionen in `main` auf.
- Gib die Ergebnisse aus.

## Dateien
- `main.c`
- `lib.h`
- `lib.c`

## Tipps und Tricks
- Funktionsdeklarationen kommen in die Header-Datei.
- Die Implementierung kommt in `lib.c`.
- In `main.c` bindest du `lib.h` mit `#include "lib.h"` ein.

## Lösungsidee
- Deklariere die Funktionen in `lib.h`.
- Implementiere sie in `lib.c`.
- Teste die Funktionen mit festen Werten in `main`.