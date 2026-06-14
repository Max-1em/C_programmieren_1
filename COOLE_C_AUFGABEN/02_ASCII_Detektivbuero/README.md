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
- Nutze dafür eigene Funktionen in `lib.c`.

## Dateien
- `main.c`
- `lib.c`
- `lib.h`

## Eingaben verarbeiten
Ein einzelnes Zeichen kannst du so einlesen:
```c
char c;
scanf("%c", &c);
```

Wichtig:
- `%c` steht für ein einzelnes Zeichen
- Auch hier braucht `scanf` die Adresse mit `&c`

## Aufbau mit mehreren Dateien
- `main.c` enthält die Eingabe und Ausgabe
- `lib.h` enthält die Funktionsdeklarationen
- `lib.c` enthält die Funktionsdefinitionen

## Tipps und Tricks
- Ziffern liegen zwischen `'0'` und `'9'`.
- Großbuchstaben liegen zwischen `'A'` und `'Z'`.
- Kleinbuchstaben liegen zwischen `'a'` und `'z'`.
- Lagere Prüfungen in kleine Funktionen aus.
- Teste zuerst mit Zeichen wie `A`, `a`, `7` und `?`.

## Kleine Hilfen
Du könntest zum Beispiel diese Funktionen anlegen:
- `int is_digit(char c);`
- `int is_upper(char c);`
- `int is_lower(char c);`
- `char to_upper_char(char c);`
- `char to_lower_char(char c);`

## Keine fertige Lösung
Die Dateien sollen nur ein Gerüst sein. Die eigentliche Logik sollst du selbst schreiben.