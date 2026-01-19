# Pointer Grundlagen

## Aufgabe
Implementiere die folgenden Funktionen:

```c
void swap(int *a, int *b);
int* findMax(int *array, size_t length);
void increment(int *value, int amount);
```

## Beschreibung
- **swap()**: Vertausche zwei Werte über Pointer
- **findMax()**: Finde das Maximum und gib dessen Adresse zurück
- **increment()**: Inkrementiere Wert über Pointer

## Beispiele
- swap(&a, &b) mit a=5, b=10 → a=10, b=5
- findMax([3, 7, 2, 9, 1], 5) → Pointer auf 9
- increment(&x, 5) mit x=10 → x=15