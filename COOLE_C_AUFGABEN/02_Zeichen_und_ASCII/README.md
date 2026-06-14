# 02 Zeichen und ASCII

## Ziel
Schreibe ein Programm, das ein Zeichen einliest und untersucht.

## Anforderungen
- Lies ein Zeichen mit `scanf` ein.
- Prüfe, ob es eine Ziffer ist.
- Prüfe, ob es ein Großbuchstabe ist.
- Prüfe, ob es ein Kleinbuchstabe ist.
- Gib den ASCII-Wert aus.
- Gib das Zeichen als Groß- oder Kleinbuchstaben aus, falls möglich.

## Dateien
- `main.c`

## Tipps und Tricks
- Ziffern liegen in ASCII zwischen `'0'` und `'9'`.
- Großbuchstaben liegen zwischen `'A'` und `'Z'`.
- Kleinbuchstaben liegen zwischen `'a'` und `'z'`.
- Mit `%d` kannst du den ASCII-Wert eines `char` ausgeben.

## Lösungsidee
- Lies das Zeichen in eine Variable vom Typ `char`.
- Verwende `if`-Abfragen mit Zeichenbereichen.
- Für die Umwandlung zwischen Groß- und Kleinbuchstaben kann die Differenz 32 genutzt werden.