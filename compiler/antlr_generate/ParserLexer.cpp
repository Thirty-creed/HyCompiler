
// Generated from ./grammarrule/Parser.g4 by ANTLR 4.8


#include "ParserLexer.h"


using namespace antlr4;


ParserLexer::ParserLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ParserLexer::~ParserLexer() {
  delete _interpreter;
}

std::string ParserLexer::getGrammarFileName() const {
  return "Parser.g4";
}

const std::vector<std::string>& ParserLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ParserLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& ParserLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ParserLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ParserLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ParserLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ParserLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> ParserLexer::_decisionToDFA;
atn::PredictionContextCache ParserLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ParserLexer::_atn;
std::vector<uint16_t> ParserLexer::_serializedATN;

std::vector<std::string> ParserLexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"T__3", u8"Int", u8"Float", u8"Void", 
  u8"Const", u8"If", u8"Else", u8"While", u8"Break", u8"Continue", u8"Return", 
  u8"Assign", u8"Lsb", u8"Rsb", u8"SLp", u8"SRp", u8"Add", u8"Sub", u8"Mul", 
  u8"Div", u8"Mod", u8"Equal", u8"Nequal", u8"Gt", u8"Lt", u8"Le", u8"Ge", 
  u8"Not", u8"And", u8"Or", u8"Id", u8"Id_nondigit", u8"Identifier", u8"IntConst", 
  u8"Decimal_const", u8"Octal_const", u8"Hexadecimal_const", u8"Hex_prefix", 
  u8"FloatConst", u8"Decimal_floating_const", u8"Fractional_const", u8"Exponent_part", 
  u8"Digit_sequence", u8"Hexadecimal_floating_const", u8"Hexacdecmial_fractional_constant", 
  u8"Binary_exponent_part", u8"Hexadecimal_digit_sequence", u8"Ws", u8"BlockComment", 
  u8"LineComment", u8"Eof"
};

std::vector<std::string> ParserLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> ParserLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> ParserLexer::_literalNames = {
  "", u8"','", u8"';'", u8"'{'", u8"'}'", u8"'int'", u8"'float'", u8"'void'", 
  u8"'const'", u8"'if'", u8"'else'", u8"'while'", u8"'break'", u8"'continue'", 
  u8"'return'", u8"'='", u8"'['", u8"']'", u8"'('", u8"')'", u8"'+'", u8"'-'", 
  u8"'*'", u8"'/'", u8"'%'", u8"'=='", u8"'!='", u8"'>'", u8"'<'", u8"'<='", 
  u8"'>='", u8"'!'", u8"'&&'", u8"'||'"
};

std::vector<std::string> ParserLexer::_symbolicNames = {
  "", "", "", "", "", u8"Int", u8"Float", u8"Void", u8"Const", u8"If", u8"Else", 
  u8"While", u8"Break", u8"Continue", u8"Return", u8"Assign", u8"Lsb", u8"Rsb", 
  u8"SLp", u8"SRp", u8"Add", u8"Sub", u8"Mul", u8"Div", u8"Mod", u8"Equal", 
  u8"Nequal", u8"Gt", u8"Lt", u8"Le", u8"Ge", u8"Not", u8"And", u8"Or", 
  u8"Id", u8"IntConst", u8"FloatConst", u8"Ws", u8"BlockComment", u8"LineComment", 
  u8"Eof"
};

dfa::Vocabulary ParserLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ParserLexer::_tokenNames;

ParserLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x2a, 0x172, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
    0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 
    0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
    0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 
    0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 
    0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 
    0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 
    0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 
    0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 
    0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 
    0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 
    0x25, 0x9, 0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 
    0x9, 0x28, 0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 
    0x2b, 0x4, 0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 
    0x4, 0x2f, 0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 
    0x32, 0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
    0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x7, 0x23, 0xdf, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0xe2, 0xb, 
    0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x5, 0x26, 0xeb, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 
    0xef, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0xf2, 0xb, 0x27, 0x3, 0x27, 0x5, 
    0x27, 0xf5, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0xfa, 
    0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0xfd, 0xb, 0x28, 0x3, 0x28, 0x5, 0x28, 
    0x100, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x6, 0x29, 0x104, 0xa, 0x29, 
    0xd, 0x29, 0xe, 0x29, 0x105, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x5, 0x2a, 0x10c, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x110, 
    0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x114, 0xa, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x119, 0xa, 0x2c, 0x3, 0x2d, 0x5, 0x2d, 
    0x11c, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x5, 0x2d, 0x123, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x127, 
    0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x6, 0x2f, 0x12c, 0xa, 0x2f, 
    0xd, 0x2f, 0xe, 0x2f, 0x12d, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 
    0x133, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x138, 
    0xa, 0x30, 0x5, 0x30, 0x13a, 0xa, 0x30, 0x3, 0x31, 0x5, 0x31, 0x13d, 
    0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 
    0x31, 0x144, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x148, 0xa, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x6, 0x33, 0x14d, 0xa, 0x33, 
    0xd, 0x33, 0xe, 0x33, 0x14e, 0x3, 0x34, 0x6, 0x34, 0x152, 0xa, 0x34, 
    0xd, 0x34, 0xe, 0x34, 0x153, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x15c, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 
    0x15f, 0xb, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x16a, 0xa, 0x36, 
    0xc, 0x36, 0xe, 0x36, 0x16d, 0xb, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x15d, 0x2, 0x38, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 
    0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 
    0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 0x1d, 0x10, 0x1f, 0x11, 0x21, 0x12, 
    0x23, 0x13, 0x25, 0x14, 0x27, 0x15, 0x29, 0x16, 0x2b, 0x17, 0x2d, 0x18, 
    0x2f, 0x19, 0x31, 0x1a, 0x33, 0x1b, 0x35, 0x1c, 0x37, 0x1d, 0x39, 0x1e, 
    0x3b, 0x1f, 0x3d, 0x20, 0x3f, 0x21, 0x41, 0x22, 0x43, 0x23, 0x45, 0x24, 
    0x47, 0x2, 0x49, 0x2, 0x4b, 0x25, 0x4d, 0x2, 0x4f, 0x2, 0x51, 0x2, 0x53, 
    0x2, 0x55, 0x26, 0x57, 0x2, 0x59, 0x2, 0x5b, 0x2, 0x5d, 0x2, 0x5f, 0x2, 
    0x61, 0x2, 0x63, 0x2, 0x65, 0x2, 0x67, 0x27, 0x69, 0x28, 0x6b, 0x29, 
    0x6d, 0x2a, 0x3, 0x2, 0xe, 0x5, 0x2, 0x43, 0x5c, 0x61, 0x61, 0x63, 0x7c, 
    0x6, 0x2, 0x32, 0x3b, 0x43, 0x5c, 0x61, 0x61, 0x63, 0x7c, 0x3, 0x2, 
    0x33, 0x3b, 0x3, 0x2, 0x32, 0x3b, 0x3, 0x2, 0x32, 0x39, 0x3, 0x2, 0x32, 
    0x3a, 0x5, 0x2, 0x32, 0x3b, 0x43, 0x48, 0x63, 0x68, 0x4, 0x2, 0x47, 
    0x47, 0x67, 0x67, 0x4, 0x2, 0x2d, 0x2d, 0x2f, 0x2f, 0x4, 0x2, 0x52, 
    0x52, 0x72, 0x72, 0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 0x22, 0x4, 0x2, 
    0xc, 0xc, 0xf, 0xf, 0x2, 0x17d, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 0x2, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x55, 0x3, 0x2, 0x2, 0x2, 0x2, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x69, 0x3, 0x2, 0x2, 0x2, 0x2, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x3, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x5, 0x71, 0x3, 0x2, 0x2, 0x2, 0x7, 0x73, 0x3, 0x2, 0x2, 0x2, 0x9, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0xb, 0x77, 0x3, 0x2, 0x2, 0x2, 0xd, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0xf, 0x81, 0x3, 0x2, 0x2, 0x2, 0x11, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x13, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x15, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x17, 0x94, 0x3, 0x2, 0x2, 0x2, 0x19, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x1b, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0x1d, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x1f, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0x21, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x23, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0x25, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x27, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0xba, 0x3, 0x2, 0x2, 0x2, 0x2b, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x2f, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x33, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0x37, 0xca, 0x3, 0x2, 0x2, 0x2, 0x39, 0xcc, 
    0x3, 0x2, 0x2, 0x2, 0x3b, 0xce, 0x3, 0x2, 0x2, 0x2, 0x3d, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x41, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0x43, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x45, 0xdc, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x49, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0xea, 0x3, 0x2, 0x2, 0x2, 0x4d, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0x51, 0x101, 0x3, 0x2, 0x2, 0x2, 0x53, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x57, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x122, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x139, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x143, 0x3, 0x2, 0x2, 0x2, 0x63, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x67, 0x151, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x157, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x165, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x170, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x2e, 0x2, 0x2, 0x70, 0x4, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x3d, 0x2, 0x2, 0x72, 0x6, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x74, 0x7, 0x7d, 0x2, 0x2, 0x74, 0x8, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x76, 0x7, 0x7f, 0x2, 0x2, 0x76, 0xa, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x78, 0x7, 0x6b, 0x2, 0x2, 0x78, 0x79, 0x7, 0x70, 0x2, 0x2, 0x79, 
    0x7a, 0x7, 0x76, 0x2, 0x2, 0x7a, 0xc, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 
    0x7, 0x68, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x6e, 0x2, 0x2, 0x7d, 0x7e, 0x7, 
    0x71, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x63, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x76, 
    0x2, 0x2, 0x80, 0xe, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x78, 0x2, 
    0x2, 0x82, 0x83, 0x7, 0x71, 0x2, 0x2, 0x83, 0x84, 0x7, 0x6b, 0x2, 0x2, 
    0x84, 0x85, 0x7, 0x66, 0x2, 0x2, 0x85, 0x10, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x87, 0x7, 0x65, 0x2, 0x2, 0x87, 0x88, 0x7, 0x71, 0x2, 0x2, 0x88, 0x89, 
    0x7, 0x70, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x75, 0x2, 0x2, 0x8a, 0x8b, 0x7, 
    0x76, 0x2, 0x2, 0x8b, 0x12, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x6b, 
    0x2, 0x2, 0x8d, 0x8e, 0x7, 0x68, 0x2, 0x2, 0x8e, 0x14, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x90, 0x7, 0x67, 0x2, 0x2, 0x90, 0x91, 0x7, 0x6e, 0x2, 0x2, 
    0x91, 0x92, 0x7, 0x75, 0x2, 0x2, 0x92, 0x93, 0x7, 0x67, 0x2, 0x2, 0x93, 
    0x16, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x79, 0x2, 0x2, 0x95, 0x96, 
    0x7, 0x6a, 0x2, 0x2, 0x96, 0x97, 0x7, 0x6b, 0x2, 0x2, 0x97, 0x98, 0x7, 
    0x6e, 0x2, 0x2, 0x98, 0x99, 0x7, 0x67, 0x2, 0x2, 0x99, 0x18, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x9b, 0x7, 0x64, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x74, 0x2, 
    0x2, 0x9c, 0x9d, 0x7, 0x67, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x63, 0x2, 0x2, 
    0x9e, 0x9f, 0x7, 0x6d, 0x2, 0x2, 0x9f, 0x1a, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0xa1, 0x7, 0x65, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x71, 0x2, 0x2, 0xa2, 0xa3, 
    0x7, 0x70, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x76, 0x2, 0x2, 0xa4, 0xa5, 0x7, 
    0x6b, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x70, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x77, 
    0x2, 0x2, 0xa7, 0xa8, 0x7, 0x67, 0x2, 0x2, 0xa8, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xaa, 0x7, 0x74, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x67, 0x2, 0x2, 
    0xab, 0xac, 0x7, 0x76, 0x2, 0x2, 0xac, 0xad, 0x7, 0x77, 0x2, 0x2, 0xad, 
    0xae, 0x7, 0x74, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x70, 0x2, 0x2, 0xaf, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x3f, 0x2, 0x2, 0xb1, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x5d, 0x2, 0x2, 0xb3, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0xb5, 0x7, 0x5f, 0x2, 0x2, 0xb5, 0x24, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0xb7, 0x7, 0x2a, 0x2, 0x2, 0xb7, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xb9, 0x7, 0x2b, 0x2, 0x2, 0xb9, 0x28, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbb, 0x7, 0x2d, 0x2, 0x2, 0xbb, 0x2a, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 
    0x7, 0x2f, 0x2, 0x2, 0xbd, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 
    0x2c, 0x2, 0x2, 0xbf, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x31, 
    0x2, 0x2, 0xc1, 0x30, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x27, 0x2, 
    0x2, 0xc3, 0x32, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x3f, 0x2, 0x2, 
    0xc5, 0xc6, 0x7, 0x3f, 0x2, 0x2, 0xc6, 0x34, 0x3, 0x2, 0x2, 0x2, 0xc7, 
    0xc8, 0x7, 0x23, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x3f, 0x2, 0x2, 0xc9, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x40, 0x2, 0x2, 0xcb, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x3e, 0x2, 0x2, 0xcd, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xcf, 0x7, 0x3e, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x3f, 0x2, 
    0x2, 0xd0, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x40, 0x2, 0x2, 
    0xd2, 0xd3, 0x7, 0x3f, 0x2, 0x2, 0xd3, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x7, 0x23, 0x2, 0x2, 0xd5, 0x40, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 
    0x7, 0x28, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x28, 0x2, 0x2, 0xd8, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x7e, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x7e, 
    0x2, 0x2, 0xdb, 0x44, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xe0, 0x5, 0x47, 0x24, 
    0x2, 0xdd, 0xdf, 0x5, 0x49, 0x25, 0x2, 0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0x46, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x9, 0x2, 0x2, 0x2, 0xe4, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe6, 0x9, 0x3, 0x2, 0x2, 0xe6, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0xeb, 0x5, 0x4d, 0x27, 0x2, 0xe8, 0xeb, 0x5, 0x4f, 0x28, 
    0x2, 0xe9, 0xeb, 0x5, 0x51, 0x29, 0x2, 0xea, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0xec, 0xf0, 0x9, 0x4, 0x2, 0x2, 0xed, 0xef, 
    0x9, 0x5, 0x2, 0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0xf1, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf5, 0x7, 0x32, 0x2, 0x2, 0xf4, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x4e, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xff, 0x7, 0x32, 0x2, 0x2, 0xf7, 0xfb, 0x9, 0x6, 0x2, 0x2, 0xf8, 0xfa, 
    0x9, 0x7, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfd, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0x100, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0x100, 0x7, 0x32, 0x2, 0x2, 0xff, 0xf7, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x50, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x103, 0x5, 0x53, 0x2a, 0x2, 0x102, 0x104, 0x9, 0x8, 0x2, 0x2, 0x103, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x52, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x32, 0x2, 0x2, 0x108, 
    0x10c, 0x7, 0x7a, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x32, 0x2, 0x2, 0x10a, 
    0x10c, 0x7, 0x5a, 0x2, 0x2, 0x10b, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x54, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x110, 
    0x5, 0x57, 0x2c, 0x2, 0x10e, 0x110, 0x5, 0x5f, 0x30, 0x2, 0x10f, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x113, 0x5, 0x59, 0x2d, 0x2, 0x112, 0x114, 0x5, 
    0x5b, 0x2e, 0x2, 0x113, 0x112, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x114, 0x119, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x5, 
    0x5d, 0x2f, 0x2, 0x116, 0x117, 0x5, 0x5b, 0x2e, 0x2, 0x117, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x111, 0x3, 0x2, 0x2, 0x2, 0x118, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x58, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x5d, 
    0x2f, 0x2, 0x11b, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x30, 
    0x2, 0x2, 0x11e, 0x123, 0x5, 0x5d, 0x2f, 0x2, 0x11f, 0x120, 0x5, 0x5d, 
    0x2f, 0x2, 0x120, 0x121, 0x7, 0x30, 0x2, 0x2, 0x121, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x122, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x124, 0x126, 0x9, 0x9, 0x2, 
    0x2, 0x125, 0x127, 0x9, 0xa, 0x2, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 
    0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x128, 0x129, 0x5, 0x5d, 0x2f, 0x2, 0x129, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x12c, 0x9, 0x5, 0x2, 0x2, 0x12b, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x12f, 0x130, 0x5, 0x53, 0x2a, 0x2, 0x130, 0x132, 0x5, 0x61, 0x31, 0x2, 
    0x131, 0x133, 0x5, 0x63, 0x32, 0x2, 0x132, 0x131, 0x3, 0x2, 0x2, 0x2, 
    0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x13a, 0x3, 0x2, 0x2, 0x2, 
    0x134, 0x135, 0x5, 0x53, 0x2a, 0x2, 0x135, 0x137, 0x5, 0x65, 0x33, 0x2, 
    0x136, 0x138, 0x5, 0x63, 0x32, 0x2, 0x137, 0x136, 0x3, 0x2, 0x2, 0x2, 
    0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13a, 0x3, 0x2, 0x2, 0x2, 
    0x139, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x139, 0x134, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x60, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13d, 0x5, 0x65, 0x33, 0x2, 
    0x13c, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 
    0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0x30, 0x2, 0x2, 
    0x13f, 0x144, 0x5, 0x65, 0x33, 0x2, 0x140, 0x141, 0x5, 0x65, 0x33, 0x2, 
    0x141, 0x142, 0x7, 0x30, 0x2, 0x2, 0x142, 0x144, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x143, 0x140, 0x3, 0x2, 0x2, 0x2, 
    0x144, 0x62, 0x3, 0x2, 0x2, 0x2, 0x145, 0x147, 0x9, 0xb, 0x2, 0x2, 0x146, 
    0x148, 0x9, 0xa, 0x2, 0x2, 0x147, 0x146, 0x3, 0x2, 0x2, 0x2, 0x147, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 
    0x14a, 0x5, 0x5d, 0x2f, 0x2, 0x14a, 0x64, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x14d, 0x9, 0x8, 0x2, 0x2, 0x14c, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 
    0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x66, 0x3, 0x2, 0x2, 0x2, 0x150, 0x152, 
    0x9, 0xc, 0x2, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 
    0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 
    0x8, 0x34, 0x2, 0x2, 0x156, 0x68, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 
    0x7, 0x31, 0x2, 0x2, 0x158, 0x159, 0x7, 0x2c, 0x2, 0x2, 0x159, 0x15d, 
    0x3, 0x2, 0x2, 0x2, 0x15a, 0x15c, 0xb, 0x2, 0x2, 0x2, 0x15b, 0x15a, 
    0x3, 0x2, 0x2, 0x2, 0x15c, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 
    0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x160, 
    0x3, 0x2, 0x2, 0x2, 0x15f, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 
    0x7, 0x2c, 0x2, 0x2, 0x161, 0x162, 0x7, 0x31, 0x2, 0x2, 0x162, 0x163, 
    0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x8, 0x35, 0x2, 0x2, 0x164, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x7, 0x31, 0x2, 0x2, 0x166, 0x167, 
    0x7, 0x31, 0x2, 0x2, 0x167, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 
    0xa, 0xd, 0x2, 0x2, 0x169, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16d, 
    0x3, 0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 
    0x3, 0x2, 0x2, 0x2, 0x16c, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16b, 
    0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x8, 0x36, 0x2, 0x2, 0x16f, 0x6c, 
    0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x7, 0x2, 0x2, 0x3, 0x171, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x2, 0xe0, 0xea, 0xf0, 0xf4, 0xfb, 0xff, 0x105, 
    0x10b, 0x10f, 0x113, 0x118, 0x11b, 0x122, 0x126, 0x12d, 0x132, 0x137, 
    0x139, 0x13c, 0x143, 0x147, 0x14e, 0x153, 0x15d, 0x16b, 0x3, 0x8, 0x2, 
    0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ParserLexer::Initializer ParserLexer::_init;
