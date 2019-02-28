//% weight=100 color=#000000 icon="\uf043" block="HIRAGANA"
namespace hiragana {

    //% shim=hiragana::addNumber
    function addNumber(n: number): number {
        return 0
    }

    const hiras: string = 'あいうえお';
    const kanas: string = 'アイウエオ';

    const kana1 = [[0x10, 0x11, 0x1E, 0x14, 0x18],
    [0x4, 0x4, 0xF, 0x8, 0x10],
    [0xC, 0x9, 0x19, 0x9, 0xE],
    [0x1, 0x11, 0x1F, 0x11, 0x1],
    [0x9, 0xA, 0xC, 0x1F, 0x8]];

    const hira1 = [[0xB, 0x1D, 0xA, 0x4, 0xB],
    [0x1E, 0x1, 0x2, 0x10, 0xE],
    [0x8, 0x19, 0x19, 0x9, 0x6],
    [0x9, 0x1A, 0x1A, 0xD, 0x9],
    [0xB, 0x1F, 0xA, 0x2, 0x9]];

    let im = [0, 0, 0, 0, 0,
        0, 0, 0, 0, 0,
        0, 0, 0, 0, 0,
        0, 0, 0, 0, 0,
        0, 0, 0, 0, 0,
    ];

    let bright = 255;

    function setBright(b: number) {
        if (b <= 255 && b > 0)
            bright = b;
    }

    function searchKana(s: string) {
        let n = -1;
        let m: number[] = [0, 0, 0, 0, 0];

        if (s <= "お") {
            n = hiras.indexOf(s);
            serial.writeNumber(n);
            serial.writeLine("")
            m = hira1[n];
        } else if (s <= "オ") {
            n = kanas.indexOf(s);
            serial.writeNumber(n);
            serial.writeLine("")
            m = kana1[n];
        }
        for (let x = 0; x < 5; x++) {
            let d = m[x];
            for (let y = 0; y < 5; y++) {
                im[y * 5 + x] = (d & 0x10 ? bright : 0);
                d <<= 1;
            }
        }
    }

    function setKana(): void {
        for (let x = 0; x < 5; x++) {
            for (let y = 0; y < 5; y++) {
                led.plotBrightness(x, y, im[y * 5 + x]);
            }
        }
    }

    /**
     * Get number
     */
    //% blockId=envirobit_get_number
    //% block="Get number"
    export function getNumber(): number {
        let n = addNumber(2);
        return n;
    }
}