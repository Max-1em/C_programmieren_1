# 01 Kosmische Snackstation

## Ziel
Schreibe ein Programm, das eine kleine Bestellung berechnet.

## Anforderungen
- Lies die Anzahl von Burgern, Pommes und Getränken ein.
- Verwende feste Preise.
- Berechne die Gesamtsumme.
- Berechne die Gesamtanzahl aller Artikel.
- Gib aus, ob mehr als 5 Artikel gekauft wurden.
- Nutze dafür eigene Funktionen in `lib.c`.

## Dateien
- `main.c`
- `lib.c`
- `lib.h`

## Was du selbst umsetzen sollst
- Die Eingabe mit `scanf`
- Die Ausgabe mit `printf`
- Die Funktionsdeklarationen in `lib.h`
- Die Funktionsdefinitionen in `lib.c`
- Die Funktionsaufrufe in `main.c`

## Eingaben verarbeiten
Für Benutzereingaben kannst du `scanf` verwenden.

Beispiel:
```c
int burger = 0;
scanf("%d", &burger);
```

Wichtig:
- `%d` steht für `int`
- Vor der Variablen steht `&`, damit `scanf` die Adresse bekommt
- Prüfe genau, welche Datentypen du einliest

## Aufbau mit mehreren Dateien
Wenn du Funktionen auslagern sollst, ist die typische Struktur:

- `main.c`
  enthält `main()` und die Benutzereingabe
- `lib.h`
  enthält die Funktionsdeklarationen
- `lib.c`
  enthält die Funktionsdefinitionen

Beispiel:
```c
/* lib.h */
int calculate_total(int burger, int fries, int drinks);
```

```c
/* lib.c */
int calculate_total(int burger, int fries, int drinks)
{
    return burger * 5 + fries * 3 + drinks * 2;
}
```

```c
/* main.c */
#include "lib.h"
```

## Tipps und Tricks
- Schreibe zuerst die Funktionsnamen und Parameter auf.
- Implementiere danach jede Funktion einzeln.
- Teste zuerst mit festen Werten, danach mit Benutzereingaben.
- Achte auf sinnvolle Variablennamen.

## Kleine Hilfen
Du könntest zum Beispiel diese Funktionen anlegen:
- `int calculate_total(int burger, int fries, int drinks);`
- `int count_items(int burger, int fries, int drinks);`

## Keine fertige Lösung
Die Dateien sind absichtlich nur als Gerüst gedacht. Du sollst die Logik selbst ergänzen.