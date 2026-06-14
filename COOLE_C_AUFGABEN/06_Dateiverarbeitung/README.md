# 06 Dateiverarbeitung

## Ziel
Schreibe ein Programm, das Zahlen aus einer Datei liest.

## Anforderungen
- Lies Zahlen aus einer Datei `test.txt`.
- Gib jede Zahl aus.
- Berechne die Summe.
- Gib die größte Zahl aus.

## Dateien
- `main.c`
- `test.txt`

## Tipps und Tricks
- Öffne die Datei mit `fopen`.
- Prüfe, ob der Rückgabewert `NULL` ist.
- Lies Zahlen mit `fscanf`.
- Vergiss `fclose` nicht.

## Lösungsidee
- Öffne die Datei im Lesemodus.
- Lies die Zahlen in einer Schleife.
- Aktualisiere dabei Summe und Maximum.
- Gib am Ende die Ergebnisse aus.