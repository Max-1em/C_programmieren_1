# 01 Kosmische Snackstation

## Ziel
Schreibe ein Programm, das eine kleine Bestellung berechnet.

## Anforderungen
- Lies die Anzahl von Burgern, Pommes und Getränken ein.
- Verwende feste Preise.
- Berechne die Gesamtsumme.
- Berechne die Gesamtanzahl aller Artikel.
- Gib aus, ob mehr als 5 Artikel gekauft wurden.

## Dateien
- `main.c`
- `lib.c`
- `lib.h`

## Tipps und Tricks
- Lagere die Summenberechnung in eine Funktion aus.
- Deklariere die Funktionen in `lib.h`.
- Implementiere die Funktionen in `lib.c`.
- In `main.c` bindest du `lib.h` ein.

## Lösungsidee
- Schreibe eine Funktion `calculate_total`.
- Schreibe eine Funktion `count_items`.
- Lies die Eingaben in `main` ein.
- Rufe die Funktionen auf und gib die Ergebnisse aus.