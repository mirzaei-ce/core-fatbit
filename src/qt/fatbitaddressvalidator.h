// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FATBIT_QT_FATBITADDRESSVALIDATOR_H
#define FATBIT_QT_FATBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class FatbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FatbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Fatbit address widget validator, checks for a valid fatbit address.
 */
class FatbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FatbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // FATBIT_QT_FATBITADDRESSVALIDATOR_H
