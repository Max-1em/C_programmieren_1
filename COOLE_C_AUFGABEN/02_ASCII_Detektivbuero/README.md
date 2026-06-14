# 02 ASCII Detektivbuero

## Ziel
Schreibe ein Programm, das ein Zeichen untersucht.

## Anforderungen
- Lies ein Zeichen ein.
- Prüfe, ob es eine Ziffer ist.
- Prüfe, ob es ein Großbuchstabe ist.
- Prüfe, ob es ein Kleinbuchstabe ist.
- Gib den ASCII-Wert aus.
- Gib das Zeichen als Groß- oder Kleinbuchstaben aus, falls möglich.

## Dateien
- `main.c`
- `lib.c`
- `lib.h`

## Tipps und Tricks
- Ziffern liegen zwischen `'0'` und `'9'`.
- Großbuchstaben liegen zwischen `'A'` und `'Z'`.
- Kleinbuchstaben liegen zwischen `'a'` und `'z'`.
- Lagere Prüfungen in kleine Funktionen aus.

## Lösungsidee
- Schreibe Funktionen wie `is_digit`, `is_upper`, `is_lower`.
- Schreibe Funktionen für die Umwandlung.
- Rufe die Funktionen in `main` auf und gib die Ergebnisse aus.