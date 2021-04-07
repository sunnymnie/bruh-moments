/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtLocation module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QPLACEIMAGE_H
#define QPLACEIMAGE_H

#include <QtCore/QSharedDataPointer>
#include <QtCore/QString>
#include <QtLocation/QPlaceSupplier>
#include <QtLocation/QPlaceContent>

QT_BEGIN_NAMESPACE

class QPlaceImagePrivate;
class QUrl;

class Q_LOCATION_EXPORT QPlaceImage : public QPlaceContent
{
public:
    QPlaceImage();
#ifdef Q_QDOC
    QPlaceImage(const QPlaceContent &other);
#else
    Q_DECLARE_CONTENT_COPY_CTOR(QPlaceImage)
#endif

    virtual ~QPlaceImage();

    QUrl url() const;
    void setUrl(const QUrl &url);

    QString imageId() const;
    void setImageId(const QString &identifier);

    QString mimeType() const;
    void setMimeType(const QString &data);

private:
    Q_DECLARE_CONTENT_D_FUNC(QPlaceImage)
};

QT_END_NAMESPACE

#endif
