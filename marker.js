// marker class for robot marker dispenser

class Marker {
    constructor(color) {
        this.color = color;
        this.ink = 1.0;
        this.capped = true;
    }
    cap() {
        this.capped = true;
    }
}
