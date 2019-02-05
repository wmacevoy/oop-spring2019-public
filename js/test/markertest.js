"use strict";

var assert = require('assert');
var chai = require('chai');
var marker = require('../marker');

var expect = chai.expect;

describe('Marker', function() {
  describe('#constructor()', function() {
    it('should be black when started black', function(){
        let blackMarker = new marker.Marker("black");
        assert.equal("black",blackMarker.color);
    });
    it('should be initially capped', function() {
        let blackMarker = new marker.Marker("black");
        assert.equal(true,blackMarker.capped);        
    });
    it('should fail to draw when capped', function() {
        let blackMarker = new marker.Marker("black");
        expect(blackMarker.draw().to.throw(Marker.BAD_MARKER_CAPPED_DRAW));
    });
  });
});