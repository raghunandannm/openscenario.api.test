/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package net.asam.openscenario.v1_0.impl;

import net.asam.openscenario.v1_0.api.IEntityAction;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import java.util.Date;
import java.lang.Cloneable;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.v1_0.api.IAddEntityAction;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.IDeleteEntityAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEntityAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEntityAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EntityActionImpl extends BaseImpl implements IEntityAction, Cloneable{
	protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();
	
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, String.class);
	}
	
	private NamedReferenceProxy<IEntity> entityRef;
	private IAddEntityAction addEntityAction;
	private IDeleteEntityAction deleteEntityAction;
	/**
	 * Default constructor
	 */
	public EntityActionImpl()
	{
		super();
		addAdapter(EntityActionImpl.class, this);
		addAdapter(IEntityAction.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public INamedReference<IEntity> getEntityRef()
	{
		return entityRef;
	}
	@Override
	public IAddEntityAction getAddEntityAction()
	{
		return addEntityAction;
	}
	@Override
	public IDeleteEntityAction getDeleteEntityAction()
	{
		return deleteEntityAction;
	}
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity.]
	 * 
	*/
	public  void setEntityRef (NamedReferenceProxy<IEntity> entityRef )
	{
		this.entityRef = entityRef;
	}
	/**
	 * Sets the value of model property addEntityAction
	 * @param addEntityAction from OpenSCENARIO class model specification: [Action that adds the reference entity to the 
	 * scenario.]
	 * 
	*/
	public  void setAddEntityAction (IAddEntityAction addEntityAction )
	{
		this.addEntityAction = addEntityAction;
	}
	/**
	 * Sets the value of model property deleteEntityAction
	 * @param deleteEntityAction from OpenSCENARIO class model specification: [Action that deletes the reference entity from 
	 * the scenario.]
	 * 
	*/
	public  void setDeleteEntityAction (IDeleteEntityAction deleteEntityAction )
	{
		this.deleteEntityAction = deleteEntityAction;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTITY_REF))
		{
			// Proxy
			NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity> (parameterLiteralValue);
			entityRef = proxy;
			removeResolvedParameter(attributeKey);
				
	 	}
	}
	
	@Override
	public  Class<?> getTypeFromAttributeName(String attributeKey)
	{
		return propertyToType.get(attributeKey);
	}

	/**
	 * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
	 * method for any child.
	 * @return a list with all children (as BaseImpl)
	 */
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<BaseImpl>();
		
			IAddEntityAction addEntityAction = null;
			addEntityAction =  getAddEntityAction();
			if (addEntityAction != null)
			{
				result.add((BaseImpl) addEntityAction);
			}	
			IDeleteEntityAction deleteEntityAction = null;
			deleteEntityAction =  getDeleteEntityAction();
			if (deleteEntityAction != null)
			{
				result.add((BaseImpl) deleteEntityAction);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public EntityActionImpl clone()
	{
		EntityActionImpl clonedObject = new EntityActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Proxy
		NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>)getEntityRef()).clone();
		clonedObject.setEntityRef(proxy);
		proxy.setParent(clonedObject);
		// clone children
		IAddEntityAction addEntityAction = null;
		addEntityAction =  getAddEntityAction();
		if (addEntityAction != null)
		{
			AddEntityActionImpl clonedChild = ((AddEntityActionImpl) addEntityAction).clone();
			clonedObject.setAddEntityAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IDeleteEntityAction deleteEntityAction = null;
		deleteEntityAction =  getDeleteEntityAction();
		if (deleteEntityAction != null)
		{
			DeleteEntityActionImpl clonedChild = ((DeleteEntityActionImpl) deleteEntityAction).clone();
			clonedObject.setDeleteEntityAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
  
  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException
  {
	// proxies and string attributes 
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__ENTITY_REF))
	{
		// Get the Proxy
		INamedReference<IEntity> entityRef = getEntityRef();
		return entityRef!= null? entityRef.getNameRef():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
  
  @Override
  public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }  
  
  @Override
  public Integer getIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }
 
  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }
  
  @Override
  public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
 
  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
   
  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException
  {
 	throw new KeyNotSupportedException();

  }
 
  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__ADD_ENTITY_ACTION))
	{
		return (IOpenScenarioFlexElement) getAddEntityAction();
	}else 
	if (key.equals(OscConstants.ELEMENT__DELETE_ENTITY_ACTION))
	{
		return (IOpenScenarioFlexElement) getDeleteEntityAction();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
 
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
   
  @Override
  public IOpenScenarioFlexElement getParentFlexElement()
  {
   	return (IOpenScenarioFlexElement) getParent();
  }
  
  @Override
  public IOpenScenarioFlexElement getReferencedElement(String key, String name) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__ENTITY_REF))
	{
		// Get the Proxy
		INamedReference<IEntity> entityRef = getEntityRef();
		return entityRef!= null?(IOpenScenarioFlexElement) entityRef.getTargetObject():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
  
  @Override 
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override
  public String getModelType()
  {
  	return "EntityAction";
  }
 	
}

