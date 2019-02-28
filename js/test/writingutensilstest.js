"use strict";

var assert = require('assert');
var chai = require('chai');
var marker = require('../marker');

describe('WritingUtensil', function() {
    describe('#draw()', function() {
      it('should draw', function() {
          let greenMarker = new marker.Marker("green");
          greenMarker.capped = false;
          let wu = [
            greenMarker,
            new marker.Pencil(),
            new marker.Pencil("brown")];
            wu.forEach((item)=>item.write());
      })
    })});
