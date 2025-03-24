#ifndef OPTION_H
#define OPTION_H

enum class OptionType { CALL, PUT };

struct Option {
    double St_, K_, t_, r_, sigma_;
    OptionType type_;
};

#endif