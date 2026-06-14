# 03 – Roboterparkplatz

## Story
Du verwaltest drei kleine Roboter.

## Ziel
Nutze ein Array und ein Struct.

## Themen
- Arrays
- Structs
- Schleifen

## Aufgabe

1. Definiere:
```c
struct Robot {
    char name[20];
    int battery;
};
```

2. Lege ein Array mit 3 Robotern an.
3. Gib alle Roboter mit Namen und Batteriestand aus.
4. Finde den Roboter mit dem höchsten Batteriestand.

## Bonus
- Gib eine Warnung aus, wenn ein Roboter weniger als 20 Batterie hat.

## Beispiel
```text
Robo1 - 80
Robo2 - 15
Robo3 - 60
Stärkster Roboter: Robo1