# UART Kommunikációs Projekt

## Áttekintés
Ez a repository tartalmazza az összes általam készített vagy használt fájlt, kivéve a nanopb protobuffer implementáció generátor fájlt.

## Projekt Részletek
### STM32 Projekt
- Készítettem egy projektet STM32-re, amely támogatja az UART kommunikációt.
- Implemetáltam két parancsot UART-on protobuffer használatával a LED be- és kikapcsolásához.
- Az általatok megadott protobuffer implementációt használtam.

### Python Szkriptek
- Készítettem egy Python szkriptet a teszteléshez, de nem sikerült tesztelnem.
- Készítettem egy Python szkriptet a flood teszthez is, de azt sem tudtam kiértékelni.

## Fájlok
- **Led_ctrl.py**: Python szkript az alapvető teszteléshez.
- **uart_flood.py**: Python szkript a flood teszteléshez.

## Használati Útmutató
### Alapvető Tesztelés
1. Győződj meg róla, hogy az STM32 projekt fut és csatlakoztatva van UART-on keresztül.
2. Futtasd a `Led_ctrl.py` szkriptet a LED vezérlő parancsok teszteléséhez.

### Flood Tesztelés
1. Győződj meg róla, hogy az STM32 projekt fut és csatlakoztatva van UART-on keresztül.
2. Futtasd az `uart_flood.py` szkriptet a flood tesztelés végrehajtásához.

## Megjegyzések
- A tesztelési szkriptek elkészültek, de nem sikerült őket sikeresen tesztelni vagy kiértékelni.
- További hibakeresés és tesztelés szükséges a megfelelő működés biztosításához.
