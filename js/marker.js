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

class Marker extends WritingUtensil {
    constructor(color) {
        super(color);
        console.log("constructing marker");
        this._capped = true;
    }

    // override
    draw() {
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


exports.Marker = Marker;
exports.BadMarkerState = BadMarkerState;
