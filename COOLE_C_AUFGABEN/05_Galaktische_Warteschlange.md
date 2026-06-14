# 05 – Galaktische Warteschlange

## Story
Drei Aliens stehen in einer Warteschlange.

## Ziel
Übe Pointer mit einer kleinen Liste.

## Themen
- Pointer
- Structs
- einfache Liste

## Aufgabe

1. Definiere:
```c
struct Alien {
    char name[20];
    struct Alien* next;
};
```

2. Erzeuge 3 Aliens.
3. Verbinde sie zu einer Liste.
4. Gib die Namen der Reihe nach aus.

## Bonus
- Zähle, wie viele Aliens in der Liste sind.

## Beispiel
```text
Zorg -> Blip -> Mork -> NULL