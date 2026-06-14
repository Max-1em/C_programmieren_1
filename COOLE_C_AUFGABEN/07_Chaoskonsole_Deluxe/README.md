# 07 Pointer und Listen

## Ziel
Schreibe ein Programm mit einer kleinen einfach verketteten Liste.

## Anforderungen
- Definiere ein `struct Node` mit `value` und `next`.
- Erzeuge drei Elemente.
- Verbinde die Elemente mit Pointern.
- Gib alle Werte der Liste aus.

## Dateien
- `main.c`

## Tipps und Tricks
- `next` zeigt auf das nächste Element.
- Das letzte Element zeigt auf `NULL`.
- Mit einer Schleife kannst du durch die Liste laufen.

## Lösungsidee
- Lege drei Variablen vom Typ `struct Node` an.
- Setze die `next`-Zeiger passend.
- Starte mit einem Pointer auf das erste Element.
- Laufe bis `NULL` durch die Liste.