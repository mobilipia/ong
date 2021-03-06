/*
 * Copyright   Actility, SA. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt).
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 * Please contact Actility, SA.,  4, rue Ampere 22300 LANNION FRANCE
 * or visit www.actility.com if you need additional
 * information or have any questions.
 *
 * id $Id: $
 * author $Author: $
 * version $Revision: 17 $
 * lastrevision $Date: 2011-03-04 15:12:54 +0100 (ven., 04 mars 2011) $
 * modifiedby $LastChangedBy: $
 * lastmodified $LastChangedDate: 2011-03-04 15:12:54 +0100 (ven., 04 mars 2011) $
 */

package com.actility.servlet.song.coap;

import javax.servlet.ServletException;

import com.actility.servlet.song.LongPollURIs;
import com.actility.servlet.song.SongBindingFacade;
import com.actility.servlet.song.SongURI;

/**
 * Implementation for this binding of the {@link SongBindingFacade} needed to register a SONG binding in the SONG container.
 * <p>
 * It allows the interaction between the SONG container and the CoAP binding.
 *
 */
public final class CoAPBindingFacade implements SongBindingFacade {

    public LongPollURIs createServerLongPoll(SongURI serverURI) {
        throw new UnsupportedOperationException();
    }

    public void createServerLongPoll(SongURI contactURI, SongURI longPollURI) throws ServletException {
        throw new UnsupportedOperationException();
    }

    public void deleteServerLongPoll(SongURI contactURI, SongURI longPollURI) {
        throw new UnsupportedOperationException();
    }

    public void createClientLongPoll(SongURI contactURI, SongURI longPollURI) throws ServletException {
        throw new UnsupportedOperationException();
    }

    public void deleteClientLongPoll(SongURI contactURI, SongURI longPollURI) {
        throw new UnsupportedOperationException();
    }

}
