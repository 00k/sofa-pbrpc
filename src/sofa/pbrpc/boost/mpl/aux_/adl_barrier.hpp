
#ifndef SOFA_PBRPC_BOOST_MPL_AUX_ADL_BARRIER_HPP_INCLUDED
#define SOFA_PBRPC_BOOST_MPL_AUX_ADL_BARRIER_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2002-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id$
// $Date$
// $Revision$

#include <sofa/pbrpc/boost/mpl/aux_/config/adl.hpp>
#include <sofa/pbrpc/boost/mpl/aux_/config/gcc.hpp>
#include <sofa/pbrpc/boost/mpl/aux_/config/workaround.hpp>

#if !defined(BOOST_MPL_CFG_NO_ADL_BARRIER_NAMESPACE)

#   define BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE mpl_
#   define BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE_OPEN namespace mpl_ {
#   define BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE_CLOSE }
#   define BOOST_MPL_AUX_ADL_BARRIER_DECL(type) \
namespace sofa {                                \
namespace pbrpc {                              \
    namespace boost { namespace mpl { \
    using ::BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE::type; \
    } } } }\
/**/

#if !defined(BOOST_MPL_PREPROCESSING_MODE)
namespace BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE { namespace aux {} }
namespace sofa {
namespace pbrpc {
namespace boost { namespace mpl { using namespace BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE; 
namespace aux { using namespace BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE::aux; }
}}}}
#endif

#else // BOOST_MPL_CFG_NO_ADL_BARRIER_NAMESPACE

#   define BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE sofa::pbrpc::boost::mpl
#   define BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE_OPEN namespace sofa{ namespace pbrpc{ namespace boost { namespace mpl {
#   define BOOST_MPL_AUX_ADL_BARRIER_NAMESPACE_CLOSE }}}}
#   define BOOST_MPL_AUX_ADL_BARRIER_DECL(type) /**/

#endif

#endif // SOFA_PBRPC_BOOST_MPL_AUX_ADL_BARRIER_HPP_INCLUDED