"use strict";

class BadMarkerState {
    constructor(problem) {
        this.problem=problem;
    }
}

// abstract 
class WritingUtensil {
    constructor(color) {
        console.log("constructing writing utensil");
        this._color = color;
    }

    // abstract
    write() {
        throw new Error("write is abstract");
    }

    get color() {
        return this._color;
    }
}

class WritingUtensilFactory {
    create() { 
        throw new Error("create is abstract");        
    }
}


class Pencil extends WritingUtensil {
    constructor(/* color = "black" */) {
        console.log("constructing marker");
        let color = (arguments.length > 0) ? arguments[0] : "black";
        super(color);
    }

    /* override */
    write() {
      console.log("sketching in " + this.color);
    }
}

class MarkerBuilder extends WritingUtensilFactory {
    constructor() {
        this.color = "BLACK";
        this.capped = false;
        return this;
    }
    get color() { 
        return this.color;
    }
    set color(value) {
        this.color = value;
        return this;
    }
    get capped() { 
        return this.capped;
    }
    set capped(value) {
        this.capped = value;
        return this;
    }

    create() {
        let marker = new Marker(this.color);
        marker.capped = this.capped;
        return marker;
    }
}

class PencilBuilder extends WritingUtensilFactory {
    constructor() {
        this.color = "BLACK";
        return this;
    }
    get color() { 
        return this.color;
    }
    set color(value) {
        this.color = value;
        return this;
    }

    create() {
        return new Pencil(this.color);
    }
}
class LazyItem {
    constructor(factory) {
        this.factory = factory;
        this.object = null;
    }

    get item() {
        if (this.object == null) {
            this.object = factory.create();
        }
        return this.object;
    }

}

class Marker extends WritingUtensil {
    constructor(color) {
        super(color);
        console.log("constructing marker");
        this._capped = true;
    }

    // override
    write() {
        if (!this._capped) {
           console.log("writing in " + this.color);
        } else {
            throw Marker.BAD_MARKER_CAPPED_DRAW;
        }
    }
    
    get capped() {
        return this._capped;
    }

    set capped(value) {
        if (typeof value == "boolean") {
            this._capped = value;
        } else {
            throw Marker.BAD_MARKER_CAPPED_INVALID;
        }
    }
}

Marker.BAD_MARKER_CAPPED_DRAW = new BadMarkerState("drawing with capped marker is bad");
Marker.BAD_MARKER_CAPPED_INVALID = new BadMarkerState("capped must be true or false");


exports.WritingUtensil = WritingUtensil;
exports.Marker = Marker;
exports.Pencil = Pencil;
exports.BadMarkerState = BadMarkerState;
